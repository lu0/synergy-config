Name: synergy
Version: 1.13.0
Summary: Keyboard and mouse sharing solution
Group: Applications/Productivity
URL: https://symless.com/synergy
Source: https://symless.com/synergy/downloads
Vendor: Symless
Packager: Symless <engineering@symless.com>
License: GPLv2
Release: 1.rc2.0badc0de%{?dist}

%description
Synergy allows you to share one mouse and keyboard between multiple computers.
Work seamlessly across Windows, macOS and Linux.

%files
%defattr(755,root,root,-)
%{_bindir}/synergy
%{_bindir}/synergyc
%{_bindir}/synergys
%{_bindir}/syntool
%attr(644,-,-) %{_datarootdir}/applications/synergy.desktop
%attr(644,-,-) %{_datarootdir}/icons/hicolor/scalable/apps/synergy.svg

%changelog
* Wed Apr 26 2017 Symless <engineering@symless.com>
- Initial version of the package
