#!/bin/bash

die() {
	echo $1 != $2
	exit 1
}

EXPECTED=`echo -e "\n"`
OUTPUT=`echo 0 | ./1.2`
[ "$EXPECTED" == "$OUTPUT" ] || die $EXPECTED $OUTPUT

EXPECTED=`echo -e "36 \n"`
OUTPUT=`echo 8 | ./1.2`

exit 0

