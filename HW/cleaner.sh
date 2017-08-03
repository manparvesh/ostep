for d in */ ; do
    cd $d
    rm ._*
    rm ._*.*
    rm *.tgz
    cd ..
done
