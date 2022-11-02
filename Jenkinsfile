pipeline {
    agent any

    parameters {
        booleanParam name: 'RUN_TESTS', defaultValue: true, description: 'Run Tests?'
    }
    
    stages {
        stage('Build') {
            steps {
                echo "Build stage"
                sh 'pwd'
                dir('build') {
                    sh 'cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug ..'
                    sh 'cmake --build .'
                }
            }        
        }

        stage('Test') {
            when {
                environment name: 'RUN_TESTS', value: 'true'
            }
            steps {
                echo "Test stage"
                dir('build') {
                    sh 'bin/Product 7 8 2'
                    sh 'bin/Product_test'
                }
            }        
        }

        stage('Deploy') {
            steps {
                echo "Deploy stage"
            }        
        }
    }
}
