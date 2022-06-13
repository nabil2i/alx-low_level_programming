#!/bin/bash
wget -P .. https://github.com/nabil2i/alx-low_level_programming/blob/2ef7d529267a7b62caf5ede44bb6388f1fa20b19/0x18-dynamic_libraries/libinj.so
export LD_PRELOAD=../libinj.so
