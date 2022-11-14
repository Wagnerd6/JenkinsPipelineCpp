def call(String configJsonPath = "PipelineConfig.json", def body) {
    println("Debug: startPipeline executed")
    def json = readJSON(file: configJsonPath, returnPojo: true)
    println("Try printing json: " + json)
    sh "env"
    echo "GIT URL $GIT_URL"
}
