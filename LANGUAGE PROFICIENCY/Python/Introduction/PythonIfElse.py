#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__' :
    n = int(input())
    if n % 2 != 0 :
        print("Weird")
    else :
        if n >= 6 and n <=20 :
            print("Weird")
        else :
            print("Not Weird")

