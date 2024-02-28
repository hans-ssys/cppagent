#!/usr/bin/bash

export OPENSSL_CONF=/opt/backports/fc39/etc/pki/tls/openssl.cnf
export LD_LIBRARY_PATH=/opt/backports/fc39/lib64
conan install .  --build=missing -pr conan/profiles/gcc
