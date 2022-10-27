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
                dir('cpp/build') {
                    sh 'pwd'
                    sh 'cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug ..'
                    sh 'make'
                }
            }        
        }

        stage('Test') {
            when {
                environment name: 'RUN_TESTS', value: 'true'
            }
            steps {
                echo "Test stage"
                dir('cpp') {
                    sh 'ls .'
                    sh './Sort.exe 7 8 1'
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
