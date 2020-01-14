# Microsoft Developer Studio Project File - Name="language" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Dynamic-Link Library" 0x0102

CFG=language - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "language.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "language.mak" CFG="language - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "language - Win32 Release" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "language - Win32 Debug" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "language - Win32 French" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "language - Win32 German" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "language - Win32 Italian" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "language - Win32 Spanish" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "language - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "LANGUAGE_EXPORTS" /YX /FD /c
# ADD CPP /nologo /MT /W3 /GX /O2 /I "../../base/qcommon" /I "../../user/" /D "TONGUE_ENGLISH" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_CRT_SECURE_NO_DEPRECATE" /FD /c
# SUBTRACT CPP /YX
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386 /out:"../../base/Release/language_english.dll"

!ELSEIF  "$(CFG)" == "language - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /D "_USRDLL" /D "LANGUAGE_EXPORTS" /YX /FD /GZ /c
# ADD CPP /nologo /MTd /W3 /Gm /GX /ZI /Od /I "../../base/qcommon" /I "../../user/" /D "TONGUE_ENGLISH" /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_CRT_SECURE_NO_DEPRECATE" /FR /FD /GZ /c
# SUBTRACT CPP /YX
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /debug /machine:I386 /out:"../../base/Debug/language_english.dll" /pdbtype:sept

!ELSEIF  "$(CFG)" == "language - Win32 French"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "French"
# PROP BASE Intermediate_Dir "French"
# PROP BASE Ignore_Export_Lib 0
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "French"
# PROP Intermediate_Dir "French"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /I "../../base/qcommon" /I "../../user/" /D "TONGUE_ENGLISH" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_CRT_SECURE_NO_DEPRECATE" /FD /c
# SUBTRACT BASE CPP /YX
# ADD CPP /nologo /MT /W3 /GX /O2 /I "../../base/qcommon" /I "../../user/" /D "TONGUE_FRENCH" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_CRT_SECURE_NO_DEPRECATE" /FD /c
# SUBTRACT CPP /YX
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386 /out:"../../base/Release/language_english.dll"
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386 /out:"../../base/Release/language_french.dll"

!ELSEIF  "$(CFG)" == "language - Win32 German"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "German"
# PROP BASE Intermediate_Dir "German"
# PROP BASE Ignore_Export_Lib 0
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "German"
# PROP Intermediate_Dir "German"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /I "../../base/qcommon" /I "../../user/" /D "TONGUE_ENGLISH" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_CRT_SECURE_NO_DEPRECATE" /FD /c
# SUBTRACT BASE CPP /YX
# ADD CPP /nologo /MT /W3 /GX /O2 /I "../../base/qcommon" /I "../../user/" /D "TONGUE_GERMAN" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_CRT_SECURE_NO_DEPRECATE" /FD /c
# SUBTRACT CPP /YX
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386 /out:"../../base/Release/language_english.dll"
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386 /out:"../../base/Release/language_german.dll"

!ELSEIF  "$(CFG)" == "language - Win32 Italian"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Italian"
# PROP BASE Intermediate_Dir "Italian"
# PROP BASE Ignore_Export_Lib 0
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Italian"
# PROP Intermediate_Dir "Italian"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /I "../../base/qcommon" /I "../../user/" /D "TONGUE_ENGLISH" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_CRT_SECURE_NO_DEPRECATE" /FD /c
# SUBTRACT BASE CPP /YX
# ADD CPP /nologo /MT /W3 /GX /O2 /I "../../base/qcommon" /I "../../user/" /D "TONGUE_ITALIAN" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_CRT_SECURE_NO_DEPRECATE" /FD /c
# SUBTRACT CPP /YX
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386 /out:"../../base/Release/language_english.dll"
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386 /out:"../../base/Release/language_italian.dll"

!ELSEIF  "$(CFG)" == "language - Win32 Spanish"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Spanish"
# PROP BASE Intermediate_Dir "Spanish"
# PROP BASE Ignore_Export_Lib 0
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Spanish"
# PROP Intermediate_Dir "Spanish"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /I "../../base/qcommon" /I "../../user/" /D "TONGUE_ENGLISH" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_CRT_SECURE_NO_DEPRECATE" /FD /c
# SUBTRACT BASE CPP /YX
# ADD CPP /nologo /MT /W3 /GX /O2 /I "../../base/qcommon" /I "../../user/" /D "TONGUE_SPANISH" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_CRT_SECURE_NO_DEPRECATE" /FD /c
# SUBTRACT CPP /YX
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386 /out:"../../base/Release/language_english.dll"
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /dll /machine:I386 /out:"../../base/Release/language_spanish.dll"

!ENDIF 

# Begin Target

# Name "language - Win32 Release"
# Name "language - Win32 Debug"
# Name "language - Win32 French"
# Name "language - Win32 German"
# Name "language - Win32 Italian"
# Name "language - Win32 Spanish"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=..\..\user\l_english.cpp

!IF  "$(CFG)" == "language - Win32 Release"

!ELSEIF  "$(CFG)" == "language - Win32 Debug"

!ELSEIF  "$(CFG)" == "language - Win32 French"

# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "language - Win32 German"

# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "language - Win32 Italian"

# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "language - Win32 Spanish"

# PROP Exclude_From_Build 1

!ENDIF 

# End Source File
# Begin Source File

SOURCE=..\..\user\l_french.cpp

!IF  "$(CFG)" == "language - Win32 Release"

# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "language - Win32 Debug"

# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "language - Win32 French"

!ELSEIF  "$(CFG)" == "language - Win32 German"

# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "language - Win32 Italian"

# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "language - Win32 Spanish"

# PROP Exclude_From_Build 1

!ENDIF 

# End Source File
# Begin Source File

SOURCE=..\..\user\l_german.cpp

!IF  "$(CFG)" == "language - Win32 Release"

# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "language - Win32 Debug"

# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "language - Win32 French"

# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "language - Win32 German"

!ELSEIF  "$(CFG)" == "language - Win32 Italian"

# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "language - Win32 Spanish"

# PROP Exclude_From_Build 1

!ENDIF 

# End Source File
# Begin Source File

SOURCE=..\..\user\l_italian.cpp

!IF  "$(CFG)" == "language - Win32 Release"

# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "language - Win32 Debug"

# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "language - Win32 French"

# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "language - Win32 German"

# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "language - Win32 Italian"

!ELSEIF  "$(CFG)" == "language - Win32 Spanish"

# PROP Exclude_From_Build 1

!ENDIF 

# End Source File
# Begin Source File

SOURCE=..\..\user\l_spanish.cpp

!IF  "$(CFG)" == "language - Win32 Release"

# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "language - Win32 Debug"

# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "language - Win32 French"

# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "language - Win32 German"

# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "language - Win32 Italian"

# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "language - Win32 Spanish"

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\main.cpp

!IF  "$(CFG)" == "language - Win32 Release"

# ADD CPP /O1

!ELSEIF  "$(CFG)" == "language - Win32 Debug"

!ELSEIF  "$(CFG)" == "language - Win32 French"

# ADD BASE CPP /O1
# ADD CPP /O1

!ELSEIF  "$(CFG)" == "language - Win32 German"

# ADD BASE CPP /O1
# ADD CPP /O1

!ELSEIF  "$(CFG)" == "language - Win32 Italian"

# ADD BASE CPP /O1
# ADD CPP /O1

!ELSEIF  "$(CFG)" == "language - Win32 Spanish"

# ADD BASE CPP /O1
# ADD CPP /O1

!ENDIF 

# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=..\..\user\l__language.h
# End Source File
# Begin Source File

SOURCE=..\..\user\l_english.h
# End Source File
# Begin Source File

SOURCE=..\..\user\l_french.h
# End Source File
# Begin Source File

SOURCE=..\..\user\l_german.h
# End Source File
# Begin Source File

SOURCE=..\..\user\l_italian.h
# End Source File
# Begin Source File

SOURCE=..\..\user\l_spanish.h
# End Source File
# Begin Source File

SOURCE=..\..\user\multilang_dll.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# End Group
# End Target
# End Project
