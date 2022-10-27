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
                dir('cpp') {
                    sh 'pwd'
                    dir('build') {
                        sh 'pwd'
                    }
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
