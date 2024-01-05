# Kernel Driver Authentication Bypass PoC - No Mapper Required - Vanguard Fucker

## Overview

This project is a proof of concept (PoC) showcasing how we successfully bypassed a signed kernel driver's authentication system. The entire process was completed in less than 24 hours by a collaborative effort of our skilled team: darkmqn121, devblluettw, and _luxmaster.

## How to Use

Follow these quick steps to use the kernel driver:

1. **Download the Driver**: Get it from [Unknown Cheats Forum](https://www.unknowncheats.me/forum/valorant/618097-signeddriverhijack-mousemove.html).

2. **Install and Run the Driver**:
   - Open Command Prompt as Administrator.
   - Execute the commands:
     ```
     sc create 3monkeysbanana binPath= [path_to_driver]  type= kernel
     sc start 3monkeysbanana
     ```
     Replace `[path_to_driver]` with the path to your downloaded driver file.

3. **Load the Example**: After the driver is running, load the provided example to see the mouse move automatically.

----

## Tools

In addition to IDA Pro, we utilized a range of tools to facilitate our development and reverse-engineering processes:

- **Visual Studio 2022**: This was our primary integrated development environment (IDE) for coding and debugging. Its advanced features and robust support for C/C++ were instrumental in developing and testing our kernel driver bypass.

- **IDA Pro**: A powerful disassembler and debugger used extensively for analyzing the binary code of the kernel driver. It played a crucial role in understanding the inner workings of the authentication system we targeted.

## Project Details

- **Objective**: To demonstrate a vulnerability in the kernel driver authentication system.
- **Methodology**: Analyzing and reverse-engineering the driver using IDA Pro, identifying weak points, and exploiting them for bypass.
- **Result**: Successful bypass of the authentication system, including notable systems like Vanguard in Valorant.

## Team's Motto
"3 Macacos = Banana de Ouro" (3 Monkeys = Golden Banana)

This motto encapsulates our teamwork and the innovative approach we bring to each challenge.

## Special Mention
- **Mouse Move Bypass**: Our method includes bypassing advanced security systems like Vanguard in Valorant, showcasing the depth of our analysis and skill in execution.

## Disclaimer
This PoC is for educational purposes only. We do not encourage or condone the unauthorized bypassing of security systems.

## Contact
For more information or inquiries, please reach out to darkmqn121, devblluettw, or _luxmaster.
