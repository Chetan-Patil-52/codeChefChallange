# Q1
# Water Mixing Problem

This repository contains a solution to the Water Mixing problem where Chef aims to achieve the perfect bath temperature by mixing hot and cold water.

## Problem Description

Chef has:
- `X` litres of hot water
- `Y` litres of cold water
- An initial bathtub temperature of `A` degrees

The temperature changes:
- Increases by 1 degree for every litre of hot water added
- Decreases by 1 degree for every litre of cold water added

The goal is to determine if Chef can adjust the temperature from `A` to the desired temperature `B` using the available hot and cold water.

## Input Format

- The first line contains an integer `T`, the number of test cases.
- Each test case includes four integers: `A`, `B`, `X`, and `Y`.

## Output Format

For each test case, output "YES" if the desired temperature can be achieved, and "NO" otherwise.

# Q2
# Weight Measurement Problem

This repository contains a solution to the Weight Measurement problem, where we determine if a specific weight can be measured using a combination of given weights.

## Problem Description

The task is to check if a target weight `w` can be measured using three available weights `x`, `y`, and `z`. The weights can be combined in various ways:

- Use each weight individually
- Use any combination of the weights

The possible combinations include:
- 0 (no weights)
- `x`
- `y`
- `z`
- `x + y`
- `x + z`
- `y + z`
- `x + y + z`

## Input Format

- The first line contains an integer `t`, the number of test cases.
- Each test case consists of four integers: `w`, `x`, `y`, and `z`.

## Output Format

For each test case, output "YES" if the target weight can be achieved, and "NO" otherwise.


