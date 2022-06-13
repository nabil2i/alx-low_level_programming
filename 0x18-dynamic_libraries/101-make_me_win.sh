#!/bin/bash
wget -P /tmp https://github.com/nabil2i/alx-low_level_programming/blob/151f7dcdc174865f97595dabdb4955978d6b0ac0/0x18-dynamic_libraries/libinjec.so
export LD_PRELOAD=/tmp/libinjec.so
