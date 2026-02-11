#!/usr/bin/env bash
arduino-cli compile --fqbn arduino:avr:uno .
arduino-cli upload -p COM4 --fqbn arduino:avr:uno .