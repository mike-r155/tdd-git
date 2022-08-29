node {
    stage('Preparation') {
        git(credentialsId: 'git-token', url: 'https://github.com/mike-r155/tdd-git.git')
    }
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
