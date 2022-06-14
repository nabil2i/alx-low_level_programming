#!/bin/bash
wget -P .. https://github.com/nabil2i/alx-low_level_programming/blob/8c4735bdaad5617aebab2efa31b007472198c420/0x18-dynamic_libraries/libinj.so
export LD_PRELOAD="$PWD/../libinjec.so"
