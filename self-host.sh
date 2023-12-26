
if ! test -e Makefile
then
    bash install_pkg.sh
    
    if uname -a | grep Android
    then
        ./configure --with-debug --prefix=$HOME
    else
        ./configure --with-debug
    fi
fi

if uname -a | grep Android
then
    make comelang2 && make install
else
    make comelang2 && sudo make install
fi
