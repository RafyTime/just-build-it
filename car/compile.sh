#!/usr/bin/env bash
arduino-cli compile --fqbn arduino:avr:mega .
arduino-cli upload -p COM4 --fqbn arduino:avr:mega .