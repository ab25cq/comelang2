(echo vin && cd vin && bash fast_build.sh) && (echo zed && cd zed && bash fast_build.sh) && (echo shsh && cd shsh && bash fast_build.sh)

if uname -a | grep Android
then
    (echo mf && cd mf && neo-c header && neo-c compile && neo-c install $HOME)
else
    (echo mf && cd mf && neo-c header && neo-c compile && sudo neo-c install)
fi
