#!/bin/bash
wget -P .. https://github.com/nabil2i/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libinj.so
export LD_PRELOAD=$PWD/../libinjec.so
