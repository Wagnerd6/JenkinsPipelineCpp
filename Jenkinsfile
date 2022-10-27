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
                    sh 'ls ..'
                }
            }        
        }

        stage('Test') {
            steps {
                echo "Test stage"
            }        
        }

        stage('Deploy') {
            steps {
                echo "Deploy stage"
            }        
        }
    }
}
