#!/bin/sh
sed \
	-e '0,/Ref/{s/Ref/Designator/}' \
	-e '0,/PosX/{s/PosX/Mid X/}' \
	-e '0,/PosY/{s/PosY/Mid Y/}' \
	-e '0,/Rot/{s/Rot/Rotation/}' \
	-e '0,/Side/{s/Side/Layer/}'

