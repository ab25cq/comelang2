
if ! test -e Makefile
then
    bash install_pkg.sh
    
    if uname -a | grep Android
    then
        #./configure --with-optimize --prefix=$HOME
        ./configure --with-optimize --prefix=$HOME
    else
        #./configure --with-optimize
        ./configure --with-optimize
    fi
fi
        
if uname -a | grep Android
then
    make && make install && make distclean
else
    make && sudo make install && make distclean
fi
