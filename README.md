# BIR 
![Screenshot of BIR](https://raw.githubusercontent.com/agronick/BIR/master/bir_screenshot.png)

## Notes
Now updated for Qt 5

Simple graphical batch image resizer. Ability to resize, rotate,
crop a series of images or directories containing images while 
maintaing directory structure. To run from the command line simply
run bir followed by the directoies or files you wish to open. You
can also just use the browse dialog inside the application.

Has the ability to resize the following image formats:
 * BMP	Windows Bitmap  
 * JPG	Joint Photographic Experts Group 
 * JPEG	Joint Photographic Experts Group 
 * PNG	Portable Network Graphics	 
 * PPM	Portable Pixmap	 
 * TIFF	Tagged Image File Format	 
 * XBM	X11 Bitmap	 
 * XPM	X11 Pixmap	 

## Running

Requires libqt4 or qt depending on the distro to run.

To run simply type:

    bir

## Compiling

Requires gcc-c++ and ibqt4-devel to build

To build BIR follow these steps:

    $ git clone https://github.com/agronick/BIR.git
    $ cd BIR/build
    $ qmake ../ # Or qmake-qt4 depending on system
    $ make
    $ sudo make install
