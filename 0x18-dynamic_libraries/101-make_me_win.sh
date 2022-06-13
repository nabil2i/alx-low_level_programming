#!/bin/bash
wget -P /tmp https://github.com/nabil2i/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libinj.so
export LD_PRELOAD=/tmp/libinj.so
