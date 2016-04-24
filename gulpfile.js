var appinfo = require('./appinfo.json');
var gulp = require('gulp');
var shell = require('gulp-shell');
var del = require('del');
var minimist = require('minimist');
var fs = require('fs');

gulp.task('watch',function(){
	gulp.watch(
		["src/*"],
		gulp.series('build','install')
	);
});


gulp.task('build', shell.task(['pebble build']));

gulp.task('install', shell.task(['pebble install --phone 192.168.0.105']));

gulp.task('default', gulp.series("build", "install", "watch"));

