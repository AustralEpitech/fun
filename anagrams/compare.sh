#!/bin/bash

TSTR=123456789a

./build.sh
echo "###############################################################################"
echo $'\e[1m\e[31m'PYTHON$'\e[0m'
(set -x
    time python ./main.py "$TSTR" > /dev/null
)
echo "###############################################################################"
echo $'\e[1m\e[31m'C$'\e[0m'
(set -x
    time ./main "$TSTR" > /dev/null
)
echo "###############################################################################"
