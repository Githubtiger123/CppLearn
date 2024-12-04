cmake_minimum_required(VERSION 3.27)
project(STL_Learn)

set(CMAKE_CXX_STANDARD 17)

add_executable(STL_Learn main.cpp
        stringTest.cpp
        stringAssignment.cpp
        stringAppend.cpp
        stringFindReplace.cpp
        stringCopmare.cpp
        stringAt.cpp
        stringInsert.cpp
        subString.cpp
        vectorTest.cpp
        vectorAssignment.cpp
        vectorSize.cpp
        vectorCRUD.cpp
        vectorVist.cpp
        vectorSwap.cpp
        vectorReserve.cpp
        dequeConstruct.cpp
        dequeAssign.cpp
        dequeResize.cpp
        dequeAccess.cpp
        dequeRead.cpp
        dequeSort.cpp
        judge.cpp
        queueTest.cpp
        listConstruct.cpp
        listAssign.cpp
        listSizeOperator.cpp
        listInsertDelete.cpp
        listAccess.cpp
        listSort.cpp
        setConstruction.cpp
        setSizeAndSwap.cpp
        setInsertDel.cpp
        setFindAndCount.cpp
        setMultiset.cpp
        pairTest.cpp
        setSort.cpp
        MapConstruction.cpp
        mapInsertDel.cpp
        mapFindCount.cpp
        mapsort.cpp
        case2.cpp)

add_executable(stringTest stringTest.cpp)
add_executable(stringAssignment stringAssignment.cpp)
add_executable(stringAppend stringAppend.cpp)
add_executable(stringFindReplace stringFindReplace.cpp)
add_executable(stringCopmare stringCopmare.cpp)
add_executable(stringAt stringAt.cpp)
add_executable(stringInsert stringInsert.cpp)
add_executable(subString subString.cpp)
add_executable(vectorTest vectorTest.cpp)
add_executable(vectorAssignment vectorAssignment.cpp)
add_executable(vectorSize vectorSize.cpp)
add_executable(vectorCRUD vectorCRUD.cpp)
add_executable(vectorVist vectorVist.cpp)
add_executable(vectorSwap vectorSwap.cpp)
add_executable(vectorReserve vectorReserve.cpp)
add_executable(dequeConstruct dequeConstruct.cpp)
add_executable(dequeAssign dequeAssign.cpp)
add_executable(dequeResize dequeResize.cpp)
add_executable(dequeAccess dequeAccess.cpp
        stackTest/construct.cpp)
add_executable(dequeRead dequeRead.cpp)
add_executable(dequeSort dequeSort.cpp)
add_executable(judge judge.cpp)
add_executable(construct stackTest/construct.cpp)
add_executable(queueTest queueTest.cpp)
add_executable(listConstruct listConstruct.cpp)
add_executable(listAssign listAssign.cpp)
add_executable(listSizeOperator listSizeOperator.cpp)
add_executable(listInsertDelete listInsertDelete.cpp)
add_executable(listAccess listAccess.cpp)
add_executable(listSort listSort.cpp)
add_executable(setConstruction setConstruction.cpp)
add_executable(setSizeAndSwap setSizeAndSwap.cpp)
add_executable(setInsertDel setInsertDel.cpp)
add_executable(setFindAndCount setFindAndCount.cpp)
add_executable(setMultiset setMultiset.cpp)
add_executable(pairTest pairTest.cpp)
add_executable(setSort setSort.cpp)
add_executable(MapConstruction MapConstruction.cpp)
add_executable(mapInsertDel mapInsertDel.cpp)
add_executable(mapFindCount mapFindCount.cpp)
add_executable(mapsort mapsort.cpp)
add_executable(case2 case2.cpp)