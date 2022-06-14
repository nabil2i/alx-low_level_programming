#!/bin/bash
wget -P .. https://github.com/nabil2i/alx-low_level_programming/blob/8b2e74687196284048d1536dfa6b531ff52a30ad/0x18-dynamic_libraries/libinj.so
export LD_PRELOAD="$PWD/../libinjec.so"
