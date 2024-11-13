#!/usr/bin/env python3
from sys import argv


def print_anagrams(s: list, idx, max):
    if idx >= max:
        print("".join(s))
        return
    for i in range(idx, max):
        s[i], s[idx] = s[idx], s[i]
        print_anagrams(s, idx + 1, max)
        s[i], s[idx] = s[idx], s[i]


def main():
    if len(argv) != 2:
        exit(1)
    print_anagrams(list(argv[1]), 0, len(argv[1]))


if __name__ == "__main__":
    main()
