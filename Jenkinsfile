node {
    //parameters {
    //    booleanParam name: 'RUN_TESTS', defaultValue: true, description: 'Run Tests?'
    //}
    
    stage('Build') {
        "Build stage"
        'pwd'
        dir('build') {
                    sh 'cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug ..'
                    sh 'cmake --build .'
        }        
    }

        stage('Test') {
            //when {
            //    environment name: 'RUN_TESTS', value: 'true'
            //}
                echo "Test stage"
                dir('build') {
                    sh 'bin/Product 7 8 2'
                    sh 'bin/Product_test'
                }     
        }

        stage('Deploy') {
            echo "Deploy stage"     
        }
    }
}
