// swift-tools-version: 5.10

import PackageDescription

let package = Package(
    name: "clibpcap",
    platforms: [.macOS(.v10_15)],
    products: [
        .library(name: "clibpcap", targets: ["clibpcap"]),
    ],
    dependencies: [
        .package(url: "https://github.com/apple/swift-argument-parser.git", from: "1.5.0")
    ],
    targets: [
        .target(
            name: "clibpcap",
            dependencies: [],
            exclude: [],
            sources: [
                "./libpcap/gencode.c",
                "./libpcap/nametoaddr.c",
                "./extra/scanner.c",     // ← generated from scanner.l
                "./extra/grammar.c",     // ← generated from grammar.y
                "./libpcap/pcap-bpf.c",
                "./libpcap/fad-getad.c",
                "./libpcap/pcap.c",
                "./libpcap/optimize.c",
                "./libpcap/etherent.c",
                "./libpcap/fmtutils.c",
                "./libpcap/pcap-util.c",
                "./libpcap/savefile.c",
                "./libpcap/sf-pcap.c",
                "./libpcap/sf-pcapng.c",
                "./libpcap/pcap-common.c",
                "./libpcap/bpf_image.c",
                "./libpcap/bpf_filter.c",
                "./libpcap/bpf_dump.c"
            ],
            publicHeadersPath: "include",
            cSettings: [
                .headerSearchPath("libpcap"),
                .headerSearchPath("include"),
                .headerSearchPath("extra"),
                .define("HAVE_CONFIG_H"),
                .define("BUILDING_PCAP"),
                .unsafeFlags(["-fvisibility=hidden", "-fno-common"])
            ],
            linkerSettings: [.unsafeFlags(["-lpcap"])]
        ),
        .executableTarget(
            name: "pcapdump",
            dependencies: [
                "clibpcap",
                .product(name: "ArgumentParser", package: "swift-argument-parser")
            ]
        )
    ]
)
