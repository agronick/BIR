#BIR 

##Notes

Simple graphical batch image resizer. Ability to resize, rotate,
crop a series of images or directories containing images while 
maintaing directory structure. To run from the command line simply
run bir followed by the directoies or files you wish to open. You
can also just use the browse dialog inside the application.

##Running

Requires libqt4 or qt depending on the distro to run.

To run simply type:
    bir

##Compiling

Requires gcc-c++ and ibqt4-devel to build

To compile run these commands:
    mkdir build
    cdbuild
    qmake ../ or qmake-qt4 ../
    make
    sudo make install


