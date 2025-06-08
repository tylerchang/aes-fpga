#!/bin/bash
ifup eth0
mount /dev/mmcblk0p1 /mnt
cd /mnt
rm soc_system.rbf
rm soc_system.dtb
scp tc3407@micro36.ee.columbia.edu:~/Desktop/final_project_platform/soc_system.dtb /mnt
scp tc3407@micro36.ee.columbia.edu:~/Desktop/final_project_platform/output_files/soc_system.rbf /mnt
sync