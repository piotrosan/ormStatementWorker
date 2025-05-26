cmake_minimum_required(VERSION 3.31)
project(ormStatementWorker)

set(CMAKE_CXX_STANDARD 20)

add_executable(ormStatementWorker main.cpp
        statement/query.cpp
        statement/query.h
        statement/post.cpp
        statement/post.h
        statement/put.cpp
        statement/put.h
        orm/buildStatement.cpp
        orm/buildStatement.h
        orm/databaseClient.cpp
        orm/databaseClient.h
        statement/statement.cpp
        statement/statement.h
        templateStatement/templates.cpp
        templateStatement/templates.h)
