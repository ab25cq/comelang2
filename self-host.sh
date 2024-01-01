
if ! test -e Makefile
then
    bash install_pkg.sh
    
    if uname -a | grep Android
    then
        #./configure --with-optimize --prefix=$HOME
        #./configure --prefix=$HOME --with-debug --with-come-malloc
        #./configure --prefix=$HOME --with-debug
        ./configure --prefix=$HOME --with-debug --with-optimize
    else
        #./configure --with-optimize
        #./configure --with-debug --with-come-malloc
        #./configure --with-debug
        ./configure --with-debug --with-optimize
    fi
fi

if uname -a | grep Android
then
    make comelang2 && make install
else
    make comelang2 && sudo make install
fi
