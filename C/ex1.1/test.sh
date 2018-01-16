#!/bin/bash

die() {
	echo $1 != $2
	exit 1
}

EXPECTED=`echo -e "\n"`
OUTPUT=`echo 0 | ./1.1`
[ "$EXPECTED" == "$OUTPUT" ] || die $EXPECTED $OUTPUT


EXPECTED=`echo -e "400 \n"`
OUTPUT=`echo 20 0 | ./1.1`
[ "$EXPECTED" == "$OUTPUT" ] || die $EXPECTED $OUTPUT

EXPECTED=`echo -e "10000 4 16 \n"`
OUTPUT=`echo 100 2 4 0 | ./1.1`
[ "$EXPECTED" == "$OUTPUT" ] || die $EXPECTED $OUTPUT

EXPECTED=`echo -e "\n"`
OUTPUT=`echo -1 | ./1.1`
[ "$EXPECTED" == "$OUTPUT" ] || die $EXPECTED $OUTPUT

EXPECTED=`echo -e "25 100 \n"`
OUTPUT=`echo 5 10 -2 0 | ./1.1`
[ "$EXPECTED" == "$OUTPUT" ] || die $EXPECTED $OUTPUT

exit 0
