#!/bin/bash

GITHOME=$(pwd)

export JAVA_HOME="/usr/lib/jvm/java-8-openjdk-amd64"
export PLEXIL_HOME="$GITHOME/Modules/Plexil"
export OSAL_HOME="$GITHOME/cFS/cFE/osal"
export DYLD_LIBRARY_PATH=$DYLD_LIBRARY_PATH:"$GITHOME/Modules/lib"
export DYLD_LIBRARY_PATH=$DYLD_LIBRARY_PATH:"$GITHOME/Modules/Plexil/lib"
#export	OSPL_HOME="$GITHOME/icarous/Modules/SBD/opensplice/HDE/x86.linux"
