#!/bin/bash
wget -P /tmp https://github.com/nabil2i/alx-low_level_programming/blob/58d1ed0b14dc2cec8501400f566eb0d7b5747107/0x18-dynamic_libraries/libinj.so
export LD_PRELOAD=/tmp/libinj.so
