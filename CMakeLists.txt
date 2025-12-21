cmake_minimum_required(VERSION 3.19)
project(ClinicQueue LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(ClinicQueue
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    addnormalpatient.h addnormalpatient.cpp addnormalpatient.ui
    addemergencypatient.h addemergencypatient.cpp addemergencypatient.ui
    nextpatientinfo.h nextpatientinfo.cpp nextpatientinfo.ui
    servenextpatient.h servenextpatient.cpp servenextpatient.ui
    linkedlist.h linkedlist.cpp
    showallpatients.h showallpatients.cpp showallpatients.ui
    searchpatientbyname.h searchpatientbyname.cpp searchpatientbyname.ui
    searchpatientbytoken.h searchpatientbytoken.cpp searchpatientbytoken.ui
    searchbydoctorname.h searchbydoctorname.cpp searchbydoctorname.ui
    updatepatientinfo.h updatepatientinfo.cpp updatepatientinfo.ui
    dischargepatient.h dischargepatient.cpp dischargepatient.ui
)

target_link_libraries(ClinicQueue
    PRIVATE
        Qt::Core
        Qt::Widgets
)

include(GNUInstallDirs)

install(TARGETS ClinicQueue
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET ClinicQueue
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
