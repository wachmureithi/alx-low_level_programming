#!/bin/bash
gcc -S -mams=intel $CFILE -o ${CFILE//'.c'/'.s'}
