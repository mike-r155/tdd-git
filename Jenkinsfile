node {
    stage('Build') {
        dir('src') {
            sh ('make test')
        }
    }
    stage('Test') {
        dir('src') {
            sh('make')
        }
    }
}
