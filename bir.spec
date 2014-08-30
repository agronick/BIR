#
# spec file for package BIR
#
# Copyright (c) 2014 Kyle Agronick agronick@gmail.com
#
# All modifications and additions to the file contributed by third parties
# remain the property of their copyright owners, unless otherwise agreed
# upon. The license for this file, and modifications and additions to the
# file, is the same license as for the pristine package itself (unless the
# license for the pristine package is not an Open Source License, in which
# case the license is the MIT License). An "Open Source License" is a
# license that conforms to the Open Source Definition (Version 1.9)
# published by the Open Source Initiative.

# Please submit bugfixes or comments via http://bugs.opensuse.org/
#

Name:           bir
Version:        1.5
Release:        0
Summary:        Batch image resizer and manipulator
License:        GPL-3.0+
Group:          Graphics/2DGraphics
Url:            https://github.com/agronick/BIR
Source0:        %{name}-%{version}.tar.gz 
BuildRequires:  gcc-c++
BuildRequires:  libqt4-devel
%if 0%{?fedora_version} || 0%{?rhel_version} || 0%{?centos_version}
BuildRequires:  desktop-file-utils
%endif
%if 0%{?suse_version}
BuildRequires:  update-desktop-files
Requires: libqt4
%endif
%if 0%{?fedora_version}
Requires: qt
%endif
BuildRoot:      %{_tmppath}/%{name}-%{version}-build
Packager:	Kyle Agronick agronick@gmail.com

%description
Batch image resizer and manipulator. Written in Qt. Able to resize, crop,
and rotate directories of images and preserve file structure.

%prep
%setup -q 

%build
# Create qmake cache file to add rpm optflags.
cat > .qmake.cache <<EOF
QMAKE_CXXFLAGS += %{optflags}
EOF
%if 0%{?fedora_version} || 0%{?rhel_version} || 0%{?centos_version}
qmake-qt4
%else
qmake bir.pro -r -spec linux-g++
%endif
make %{?_smp_mflags}

%install
make install INSTALL_ROOT=%{buildroot}
%if 0%{?suse_version}
%suse_update_desktop_file -i %{name}
%endif
%if 0%{?fedora_version} || 0%{?rhel_version} || 0%{?centos_version}
desktop-file-install --dir=${RPM_BUILD_ROOT}%{_datadir}/applications %{name}.desktop
desktop-file-validate %{buildroot}%{_datadir}/applications/%{name}.desktop
%endif
%if 0%{?suse_version}
%post
%desktop_database_post
 
%postun
%desktop_database_postun
%endif

%files
%defattr(-,root,root)
%doc README.md
%{_bindir}/%{name}
%{_datadir}/applications/%{name}.desktop
%if 0%{?suse_version}
%{_datadir}/pixmaps/%{name}.png
%endif

%changelog 
* Fri Aug 29 2014 Kyle Agronick <agronick@gmail.com> 1.5
Made directories open to home folder
UI Changes
* Fri Aug 29 2014 Kyle Agronick <agronick@gmail.com> 1.4
Better loading of files from command line
Graphical remove button
Fixed crash
* Fri Aug 29 2014 Kyle Agronick <agronick@gmail.com> 1.3
Bug fixes
* Fri Aug 29 2014 Kyle Agronick <agronick@gmail.com> 1.2
Added a much larger list of file formats
* Thu Aug 28 2014 Kyle Agronick <agronick@gmail.com> 1.2
Inital release