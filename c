#!/usr/bin/env bash
set -eu
{
	cd ui 
	if ! yarn; then
		rm yarn.lock && yarn
	fi
	yarn build
}
go run ./cmd
