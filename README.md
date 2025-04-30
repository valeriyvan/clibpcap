# clibpcap Swift package

A Swift package that builds and statically links the [libpcap](https://github.com/the-tcpdump-group/libpcap) library from source (version **1.10.5**).

## Why?

On macOS, **System Integrity Protection (SIP)** prevents apps from loading dynamic libraries installed via Homebrew at runtime. This limitation renders traditional Swift packages wrapping Homebrew-based libraries ineffective for production use.

This package solves the problem by **building libpcap from source** as part of the Swift package itself — allowing reliable linking and use within macOS apps and tools.

## How was it build?

1. The libpcap source code is included as a Git submodule in `Sources/clibpcap/libpcap`.
2. Build steps:
   ```bash
   ./autogen.sh
   ./configure
   make
   ```
3. Manually move all build outputs and generated headers into `Sources/clibcap/extra` folder.
4. Now you can simply run `swift build`.

libpcap will be compiled and statically linked with your Swift code.


## Will it work on Linux?

While the `./configure` step will likely generate different outputs on Linux, the goal is to eventually automate this via a SwiftPM BuildToolPlugin, running `./autogen.sh && ./configure` && make` and moving files into `Sources/clibcap/extra` folder as part of `.prebuildCommand` and/or `.buildCommand`.

## Useful links

* [libpcap GitHub](https://github.com/the-tcpdump-group/libpcap)
* [libpcap installation notes](https://github.com/the-tcpdump-group/libpcap/blob/master/INSTALL.md)

## License

* This Swift package is licensed under the **MIT License**.

* The original [libpicap is licensed under BSD](https://github.com/the-tcpdump-group/libpcap/blob/master/LICENSE).
