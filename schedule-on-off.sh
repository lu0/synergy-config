#!/bin/bash

# Schedule shutdown and wakeup times
# ACPI wakeup

# Shutdown pc at 11:00 pm
sudo shutdown -P 23:00

# Set date and time for wakeup alarm
DATE=$(date -d '+1 day' +"%Y%m%d")  # Tomorrow, YYYMMDD
TIME=0700                           # 7:00 am,     HHMM

# Convert to epoch date
WAKETIME=$(date -d "$DATE $TIME" +%s)   # Check with: date -d @$WAKETIME

sudo sh -c "echo 0 > /sys/class/rtc/rtc0/wakealarm"            # Clear alarm
sudo sh -c "echo $WAKETIME > /sys/class/rtc/rtc0/wakealarm"    # Set alarm 

# Check if "alrm_time" and "alrm_date" are set
# cat /proc/driver/rtc

# Check shutdown status
# if [ -f /run/systemd/shutdown/scheduled ]; then
#     SHUTTIME=$(cat /run/systemd/shutdown/scheduled | grep "USEC" | cut -d '=' -f 2 | cut -c -10)
#     echo "Shutdown scheduled for $(date -d @$SHUTTIME), use 'shutdown -c' to cancel."
# fi
