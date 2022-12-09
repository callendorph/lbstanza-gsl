#!/bin/awk -f
#
#  Look at the test output from stanza's test generator
#  and filter out all the SKIPPED tests so that it is
#  easier to read.

# Skip any lines with 'SKIPPED' and empty lines
$0 !~ /(SKIPPED|^\s*$)/ {
  print
}
