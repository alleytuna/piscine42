ifconfig -a | grep -e ether | tr ' ' '\t' | cut -f 3
