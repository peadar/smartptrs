# C++ smart pointer implementation details

I started looking at some details of how std::shared\_ptr works, and
was surprised to be mostly ignorant of many details. Here's my attempt to
explain it to other interested parties.

Here be submodules. "git module init && git module update" after cloning
