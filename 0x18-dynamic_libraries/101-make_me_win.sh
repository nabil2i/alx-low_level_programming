#!/bin/bash
wget -P /tmp https://github.com/nabil2i/alx-low_level_programming/blob/185ef2714204feb691ce4948bf6c01dca5e23522/0x18-dynamic_libraries/libinj.so
export LD_PRELOAD=/tmp/libinj.so
