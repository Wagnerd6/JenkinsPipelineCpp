node {
    startPipeline { }
    stage('Build') {
        echo "Build stage"
        'pwd'
        dir('build') {
                    sh 'cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug ..'
                    sh 'cmake --build .'
        }        
    }

        stage('Test') {
            echo "Test stage"
            //if(params.RUN_TESTS) {
                dir('build') {
                    sh 'bin/Product 7 8 2'
                    sh 'bin/Product_test'
                } 
            //}
                
        }

        stage('Deploy') {
            echo "Deploy stage"     
        }
}
