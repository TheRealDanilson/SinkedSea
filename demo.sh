#!/bin/bash
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
EXEC="${DIR}/build/SinkedSea"

wait_for_input () {
    read -n 1 -s -r -p "Press any key to continue"
    echo ""
}

echo "Welcome to my demo of the SinkedSea interpreter! This script will guide you through some example programs"
echo "All code for the example programs can be found in ${DIR}/examples"

wait_for_input
cmd="${EXEC} ${DIR}/examples/factorial.ss"
echo "Running command: ${cmd}"
${cmd}
echo ""

wait_for_input
cmd="${EXEC} ${DIR}/examples/gcd.ss"
echo "Running command: ${cmd}"
${cmd}
echo ""

wait_for_input
echo "This program will INTENTIONALLY fail due to syntax errors"
cmd="${EXEC} ${DIR}/examples/syntax_errors.ss"
echo "Running command: ${cmd}"
${cmd}
echo ""

wait_for_input
cmd="${EXEC} ${DIR}/examples/race_conditions.ss"
echo "Running command: ${cmd}"
${cmd}
echo ""

wait_for_input
cmd="${EXEC} ${DIR}/examples/atomic_increment.ss"
echo "Running command: ${cmd}"
${cmd}
echo ""

echo "This concludes the demo. Have a good day!"