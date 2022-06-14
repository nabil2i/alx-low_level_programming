#!/bin/bash
wget -P .. https://github.com/nabil2i/alx-low_level_programming/blob/3bd243943ad8f7ab4ce7009bc2434cf84e50cef5/0x18-dynamic_libraries/libinj.so
export LD_PRELOAD=$PWD/../libinjec.so
